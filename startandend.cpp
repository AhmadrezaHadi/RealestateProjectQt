#include "global.h"

void toJsonApartment(QJsonDocument & doc)
{
    QJsonArray all;
    for(int i=0 ; i< v_apartment.size();i++)
    {
        apartment apt = v_apartment[i];
        QJsonObject Jobj;
        Jobj.insert("total_space", QJsonValue(apt.getTotalSpace()));
        Jobj.insert("number_of_floors", QJsonValue(apt.getNumberOfFloors()));
        Jobj.insert("total_price", QJsonValue(apt.getTotalPrice()));
        Jobj.insert("price_per_metr", QJsonValue(apt.getPricePerMetr()));
        Jobj.insert("elevator", QJsonValue(apt.getElevator()));
        Jobj.insert("address", QJsonValue(apt.getAddress()));
        Jobj.insert("id", QJsonValue(apt.getId()));
        Jobj.insert("m_username", QJsonValue(apt.get_m_username()));

        QJsonArray houses;
        for ( int j=0; j< apt.get_v_house_for_apartment().size();j++)
        {
            house hos = apt.get_v_house_for_apartment()[j];
            QJsonObject Jobj2;
            Jobj2.insert("floor_number", QJsonValue(hos.getFloorNumber()));
            Jobj2.insert("number_of_rooms", QJsonValue(hos.getNumberOfRooms()));
            Jobj2.insert("building_space", QJsonValue(hos.getBuildingSpace()));
            Jobj2.insert("use", QJsonValue(hos.getUse()));
            Jobj2.insert("state", QJsonValue(hos.get_state()));
            Jobj2.insert("total_price_of_house", QJsonValue(hos.getTotalPriceOfHouse()));
            Jobj2.insert("id", QJsonValue(hos.getId()));
            Jobj2.insert("nu_username", QJsonValue(hos.get_nu_username()));

            houses.push_back(Jobj2);
        }

        Jobj.insert("houses", QJsonValue(houses));
        all.push_back(Jobj);
    }
    doc.setArray(all);
}

void toJsonNorthVilla(QJsonDocument & doc)
{
    QJsonArray all;
    for(int i=0 ; i< v_northVilla.size();i++)
    {
        northVilla nv = v_northVilla[i];
        QJsonObject Jobj;
        Jobj.insert("building_space", QJsonValue(nv.get_building_space()));
        Jobj.insert("total_space", QJsonValue(nv.get_total_space()));
        Jobj.insert("price_per_metr", QJsonValue(nv.get_price_per_metr()));
        Jobj.insert("number_of_rooms", QJsonValue(nv.get_number_of_rooms()));
        Jobj.insert("address", QJsonValue(nv.get_address()));
        Jobj.insert("id", QJsonValue(nv.getId()));
        Jobj.insert("m_username", QJsonValue(nv.get_m_username()));
        Jobj.insert("nu_username", QJsonValue(nv.get_nu_username()));
        Jobj.insert("state", QJsonValue(nv.get_state()));
        Jobj.insert("area_of_front_yard", QJsonValue(nv.get_area_of_front_yard()));
        Jobj.insert("area_of_back_yard", QJsonValue(nv.get_area_of_back_yard()));
        Jobj.insert("total_price", QJsonValue(nv.get_total_price()));

        all.push_back(Jobj);
    }
    doc.setArray(all);
}

void toJsonSouthVilla(QJsonDocument & doc)
{
    QJsonArray all;
    for(int i=0 ; i< v_southVilla.size();i++)
    {
        southVilla sv = v_southVilla[i];
        QJsonObject Jobj;
        Jobj.insert("building_space", QJsonValue(sv.get_building_space()));
        Jobj.insert("total_space", QJsonValue(sv.get_total_space()));
        Jobj.insert("price_per_metr", QJsonValue(sv.get_price_per_metr()));
        Jobj.insert("number_of_rooms", QJsonValue(sv.get_number_of_rooms()));
        Jobj.insert("address", QJsonValue(sv.get_address()));
        Jobj.insert("id", QJsonValue(sv.getId()));
        Jobj.insert("m_username", QJsonValue(sv.get_m_username()));
        Jobj.insert("nu_username", QJsonValue(sv.get_nu_username()));
        Jobj.insert("state", QJsonValue(sv.get_state()));
        Jobj.insert("area_of_yard", QJsonValue(sv.get_area_of_yard()));
        Jobj.insert("area_of_parkingd", QJsonValue(sv.get_area_of_parking()));
        Jobj.insert("total_price", QJsonValue(sv.get_total_price()));

        all.push_back(Jobj);
    }
    doc.setArray(all);
}

void toJsonUser(QJsonDocument & doc)
{
    QJsonArray all;
    for(int i=0 ; i< v_user.size();i++)
    {
        user u = v_user[i];
        QJsonObject Jobj;
        Jobj.insert("state", QJsonValue(u.get_state()));
        Jobj.insert("type", QJsonValue(u.get_type()));
        Jobj.insert("name", QJsonValue(u.get_name()));
        Jobj.insert("family", QJsonValue(u.get_family()));
        Jobj.insert("username", QJsonValue(u.get_username()));
        Jobj.insert("password", QJsonValue(u.get_password()));
        Jobj.insert("birthday.year", QJsonValue(u.get_birthday().year));
        Jobj.insert("birthday.month", QJsonValue(u.get_birthday().month));
        Jobj.insert("birthday.day", QJsonValue(u.get_birthday().day));
        Jobj.insert("time_in.hour", QJsonValue(u.get_time_in().hour));
        Jobj.insert("time_in.minute", QJsonValue(u.get_time_in().minute));
        Jobj.insert("time_in.second", QJsonValue(u.get_time_in().second));
        Jobj.insert("time_out.hour", QJsonValue(u.get_time_out().hour));
        Jobj.insert("time_out.minute", QJsonValue(u.get_time_out().minute));
        Jobj.insert("time_out.second", QJsonValue(u.get_time_out().second));
        Jobj.insert("cash", QJsonValue(u.get_cash()));

        all.push_back(Jobj);
    }
    doc.setArray(all);
}



void start()
{

}

void end()
{
    QJsonDocument doc1;
    toJsonApartment(doc1);
    QFile json1(QString("Apartment"));
    json1.open(QFile::WriteOnly);
    json1.write(doc1.toJson());
    json1.close();

    QJsonDocument doc2;
    toJsonApartment(doc2);
    QFile json2(QString("NorthVilla"));
    json2.open(QFile::WriteOnly);
    json2.write(doc2.toJson());
    json2.close();

    QJsonDocument doc3;
    toJsonApartment(doc3);
    QFile json3(QString("SouthVilla"));
    json3.open(QFile::WriteOnly);
    json3.write(doc3.toJson());
    json3.close();

    QJsonDocument doc4;
    toJsonApartment(doc4);
    QFile json4(QString("User"));
    json4.open(QFile::WriteOnly);
    json4.write(doc4.toJson());
    json4.close();
}
