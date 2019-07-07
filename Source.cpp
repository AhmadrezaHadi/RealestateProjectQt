//#include <QString>
//#include <QVector>
//#include <algorithm>

//#include "global.h"

///*****  SHOW HABITATIONS WITH PRICE LESS THAN X AND AREA MORE THAN Y   ******/
///*****  SHOW HABITATIONS WITH PRICE LESS THAN X AND AREA MORE THAN Y   ******/
///*
//vector<apartment> show_apartment(double x, int y) {//gheymat paye kamtar x va metraj bishtar az y
//    vector <apartment> v_temp;
//    for (int i = 0; i < v_apartment.size(); i++)
//    {
//        //if (v_apartment[i].get_state() == 0)
//            if (v_apartment[i].getPricePerMetr() < x && v_apartment[i].getTotalSpace() > y)
//                v_temp.push_back(v_apartment[i]);
//    }
//    return v_temp;
//}

//vector<northVilla> show_north_villa(double x, int y) {
//    vector <northVilla> v_temp;
//    for (int i = 0; i < v_northVilla.size(); i++) {
//        if (v_northVilla[i].get_state() == 0)
//        if (v_northVilla[i].get_price_per_metr() < x && v_northVilla[i].get_building_space() > y) {
//            v_temp.push_back(v_northVilla[i]);
//        }
//    }
//    return v_temp;
//}

//vector<southVilla> show_south_villa(double x, int y) {
//    vector <southVilla> v_temp;
//    for (int i = 0; i < v_southVilla.size(); i++) {
//        if (v_southVilla[i].get_state() == 0)
//        if (v_southVilla[i].get_price_per_metr() < x && v_southVilla[i].get_building_space() > y) {
//            v_temp.push_back(v_southVilla[i]);
//        }
//    }
//    return v_temp;

//}
///********  SHOW HABITATIONS LOCATED IN STREET Z ********/
//QVector<apartment> show_apartment(QString z) {//
//	QVector <apartment> v_temp;
//	for (int i = 0; i < v_apartment.size(); i++) {
//        if (v_apartment[i].getAddress().contains(z)) {
//			v_temp.push_back(v_apartment[i]);
//		}
//	}
//	return v_temp;
//}

//QVector<northVilla> show_north_villa(QString z) {
//	QVector <northVilla> v_temp;
//	for (int i = 0; i < v_northVilla.size(); i++) {
//        if (v_northVilla[i].get_address().contains(z)) {
//			v_temp.push_back(v_northVilla[i]);
//		}
//	}
//	return v_temp;
//}

//QVector<southVilla> show_south_villa(QString z) {
//	QVector <southVilla> v_temp;
//	for (int i = 0; i < v_southVilla.size(); i++) {
//        if (v_southVilla[i].get_address().contains(z)) {
//			v_temp.push_back(v_southVilla[i]);
//		}
//	}
//	return v_temp;
//}
///***** SHOW APARTMENTS INCLUDING MORE THAN N HOUSES  ******/
//QVector <apartment> show_apartments(int N) {
//	QVector <apartment> v_temp;
//    for (int i = 0; i < v_apartment.size(); i++) {
//        if (v_apartment[i].get_v_house_for_apartment().size() > N) {
//			v_temp.push_back(v_apartment[i]);
//		}
//	}
//	return v_temp;
//}
///*******  SHOW ALL HABITATIONS SEPERATLY ******/
//QVector <apartment> show_all()
//{
//	return v_apartment;
//}

//QVector <northVilla> Nshow_all() {
//	return v_northVilla;
//}

//QVector <southVilla> Sshow_all() {
//	return v_southVilla;
//}

///*******  SHOW SORTED HABITATION BY PRICE*****/
//QVector <pair <double, QString> > show_sorted_habitation()
//{
//	QVector < pair<double, QString>> v_ans;
//	for (int i = 0; i < v_apartment.size(); i++)
//		if( v_apartment[i].get_state()  == 0 )
//			v_ans.push_back(make_pair(v_apartment[i].getTotalPrice(), v_apartment[i].getId()));
//	for (int i = 0; i < v_northVilla.size(); i++)
//		if (v_northVilla[i].get_state() == 0)
//			v_ans.push_back(make_pair(v_northVilla[i].get_total_price(), v_northVilla[i].getId()));
//	for (int i = 0; i < v_southVilla.size(); i++)
//		if (v_southVilla[i].get_state() == 0)
//			v_ans.push_back(make_pair(v_southVilla[i].get_total_price(), v_southVilla[i].getId()));

//	sort(v_ans.begin(),v_ans.end());
//	return v_ans;
//}




