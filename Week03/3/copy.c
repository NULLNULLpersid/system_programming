#include <stdio.h>
/* copy: from을 to에 복사; to가 충분히 크다고 가정 */

void copy(char from[], char to[]) {
	for(int i = 0; from[i] != '\0'; ++i) {
		to[i] = from[i];
	}
}