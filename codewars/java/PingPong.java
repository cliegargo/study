import java.util.Scanner;
import java.util.ArrayList;

public class PingPong {
	public static String pingPong(String sounds) {
		ArrayList<String> ping = new ArrayList<String>();
		ArrayList<String> pong = new ArrayList<String>();
		String point = "";
		String turn = "";
		String noise = "";
		String last = "";


		for(int i = 0; i < sounds.length(); ++i) {
			if(sounds.charAt(i) != '-') {
				point += sounds.charAt(i);
			} else {
				if(point.contains("ping")) {
					ping.add(point);
				} else if(point.contains("pong")) {
					pong.add(point);
				} else {
					if(last.contains("ping")) {
						ping.add(point);
					} else {
						pong.add(point);
					}
				}
				last = point;
				point = "";
			}
		}

		if(point.contains("ping")) {
			ping.add(point);
		} else if(point.contains("pong")) {
			pong.add(point);
		} else {
			if(last.contains("ping")) {
				ping.add(point);
			} else {
				pong.add(point);
			}
		}


		int ping_count = 0;
		int pong_count = 0;

		System.out.println(ping.size() + "\t" + pong.size());
		for(int i = 0; i < ping.size(); ++i) {
			System.out.println(ping.get(i));
			if(ping.get(i).contains("ping")) {
				ping_count += 1;
			}
		}
		System.out.println();
		for(int i = 0; i < pong.size(); ++i) {
			System.out.println(pong.get(i));
			if(pong.get(i).contains("pong")) {
				pong_count += 1;
			}
		}

		if(ping_count == pong_count) {
		} else {
			if(ping_count > pong_count) {
				return "ping";
			} else {
				return "pong";
			}
		}

		return "";
	}

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String sounds = scanner.nextLine();
		scanner.close();
		System.out.println("Res:\t" + pingPong(sounds));
	}
}
