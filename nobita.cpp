#include <iostream>

int main(){
	char x;
	int h=1000;
	std::cout << "[貴方に与えられてるHPは"<<h<<"です。　　貴方はのびたですか？]" << std::endl;
	getchar();
	std::cout << "a.はい、そうです。" << std::endl;
	std::cout << "b.いいえ、違います。" << std::endl;
	std::cin >> x;
	if (x == 'a'){
		std::cout << "[ですよね。]" << std::endl;
	}
	else if (x == 'b'){
		std::cout << "[どうやらあなたは記憶喪失のようだ。。わたしが教えてあげましょう。。。]" << std::endl;
		std::cout << "[貴方はのびたです！]" << std::endl;
	}
	getchar();
	std::cout << "(。。。。)" << std::endl;
	getchar();
	std::cout << "僕はのびた！どこにでもいる小学生。" << std::endl;
	getchar();

	std::cout << "今日は先週やったテストが返ってきた。。。そしてもう家につく！" << std::endl;
	getchar();
	std::cout << "家についた！\t" << "「ただいまー」" << std::endl;
	getchar();
	std::cout << "母親が現れた。。。！" << std::endl << std::endl;
	getchar();
	std::cout << "母「の～び～たぁああ～～！！テスト帰ってきた？」" << std::endl;
	getchar();
	std::cout << "さて、、どう答える？" << std::endl;
	getchar();
	int a;
	std::cout <<"1.うん、帰ってきたよ！" << std::endl;
	std::cout <<"2.まだです。。。" << std::endl;
	std::cout <<"3.おしえません！" << std::endl;
	std::cin >> a;

	if (a == 1){
		std::cout << "母「早く点数教えなさい！」" << std::endl << std::endl;
	}
	else if (a == 2){
		std::cout << "母「嘘つくなぁぁぁぁああああああああ」" << std::endl << std::endl;
		getchar();
		std::cout << "----GAME_OVER!!!!----" << std::endl<<std::endl;
		while (1){}
	}
	else if (a == 3){
		std::cout << "母「あっそ」" << std::endl;
		std::cout << "----YOU_ARE_DEAD!----" << std::endl << std::endl;
		while (1){}
	}

	int t;
	std::cout << "＝点数を打ち込んでください(いい点数を打ち込んで母親を喜ばせてあげましょう！)＝" << std::endl;
	std::cin >> t;

	while (t > 100){
		std::cout << "そんな点数あるわけないだろぉぉおおおおお！！！" << std::endl;
		h -= t*2;
		std::cout << "母の惑星崩壊パンチを喰らった。。。HPが減って" << h << "になった。。。" << std::endl;
		std::cin >> t;
		if (h < 0){
			std::cout << "GAME_OVER!" << std::endl << std::endl;
			getchar();
			break;
		}
	}
	while (t <= 100){

		if (t == 100){
			std::cout << "母「100点なわけねぇえええええだろおおおおおおおお！！！！うそつけぇぇぇぇえええええええええええええええ！！！！！！！！！！！！！！！！！」" << std::endl << std::endl;
			getchar();
			std::cout << "母の逆鱗に触れ、儚げに散る桜の如く、のびたは散った。。。" << std::endl << std::endl;
			break;
		}
		else if (t == 77){
			std::cout << "母「" << t << "点だって～？よくやったじゃなーい！！！」" << std::endl << std::endl;
			getchar();
			std::cout << "おこずかいもらった！" << std::endl << std::endl;
			getchar();
			std::cout << "ちゃんちゃん！" << std::endl << std::endl;
			break;
		}
		else if (h < 0){
			std::cout << "GAME_OVER!" << std::endl<<std::endl;
			getchar();
			break;
		}
		else {
			std::cout << "母「問答無用！！！」" << std::endl << std::endl;
			getchar();
			h -= t*3;
			std::cout << "顔面にラッシュを受けた。。HPが減って" << h << "" << std::endl;
			std::cin >> t;
		}
	}

	getchar();
	return 0;
}
