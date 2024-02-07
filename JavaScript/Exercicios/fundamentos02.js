function TipoDeTrinagulo(A, B, C) {
    if (A > C) {
        AUX = A;
        A = C;
        C = AUX;
    }


    if (B > A) {
        AUX = B;
        B = A;
        A = AUX;
    }


    if (B > C) {
        AUX = B;
        B = C;
        C = AUX;
    }


    if (C > A) {
        AUX = C;
        C = A;
        A = AUX;
    }

    if (C > B) {
        AUX = C;
        C = B;
        B = AUX;
    }

    if (A >= (B + C)) {
        console.log("NAO FORMA TRIANGULO")
    }
    else {
        if ((A * A) == (B * B) + (C * C)) {
            console.log("TRIANGULO RETANGULO")
        }
        else {
            if ((A * A) > (B * B) + (C * C)) {
                console.log("TRIANGULO OBTUSANGULO")
            }
            else {
                if ((A * A) < (B * B) + (C * C)) {
                    console.log("TRIANGULO ACUTANGULO")

                }
            }
        }
    }
    if (A == B && B == C) {
        console.log("TRIANGULO EQUILATERO")
    }

    else {
        if (A == B || B == C || C == A) {
            console.log("TRIANGULO ISOSCELES")
        }
    }

}


TipoDeTrinagulo(4,3,5);