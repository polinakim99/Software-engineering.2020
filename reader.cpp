#include "reader.h"

reader::reader(QString  linker)
{
    QFile file(linker);
   if(!file.open(QIODevice::ReadOnly)){
        throw "Opening error.";
    }

    QTextStream file_text(&file);    
    QString str_json;
    str_json = file_text.readAll();
    file.close();
    
    QByteArray bytes = str_json.toLocal8Bit();
    QJsonParseError docError;
    QJsonDocument json_doc = QJsonDocument::fromJson(bytes,&docError);

    
    if (docError.errorString().toInt()!= QJsonParseError::NoError){
        throw "Parse error.";
    }
    
    if(json_doc.isNull()){
        throw "JSON file is not created.";
    }

   if(!json_doc.isObject()){
        throw "JSON file is not an object.";
    }

    QJsonObject obj = json_doc.object();
   
    if(obj.isEmpty()){
        throw "JSON object is empty.";
    }
    
    json_map = obj.toVariantMap();
}

QVariantMap reader::getMap()
{
    return json_map;
}

