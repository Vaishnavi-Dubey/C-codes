#include <stdio.h>

int main() {
    char name[50];
    int phone_number;
    int customer_id;

    int body_soap;
    int hair_cream;
    int hair_spray;
    int body_spray;

    int sugar;
    int tea;
    int coffee;
    int rice;
    int wheat;

    int pepsi;
    int sprite;
    int coke;
    int mojitos;
    int thumbs_up;

    int total;
    int cosmetics_total;
    int grocery_total;
    int beverage_total;

    printf("----------------------------------\n");
    printf("Billing System\n");
    printf("----------------------------------\n");
    printf("Customer details\n");

    printf("Customer name: ");
    scanf("%s", &name);
    printf("Customer number: ");
    scanf("%d", &phone_number);
    printf("customer id: ");
    scanf("%d", &customer_id);

    printf("----------------------------------\n");

    printf("COSMETICS\n\n");

    printf("Body soap (Rs.10): ");
    scanf("%d", &body_soap);
    printf("hair cream (Rs. 25): ");
    scanf("%d", &hair_cream);
    printf("body spray (Rs.50): ");
    scanf("%d", &body_spray);
    printf("hair spray (Rs.50): ");
    scanf("%d", &hair_spray);

    printf("----------------------------------\n");

    printf("GROCERIES\n\n");

    printf("sugar (Rs 100) : ");
    scanf("%d", &sugar);
    printf("tea (rs 15): ");
    scanf("%d", &tea);
    printf("coffee (rs.50): ");
    scanf("%d", &coffee);
    printf("Rice (rs 150): ");
    scanf("%d", &rice);
    printf("wheat (rs. 150): ");
    scanf("%d", &wheat);

    printf("----------------------------------\n");

    printf("BEVERAGES\n\n");

    printf("pepsi (rs.30): ");
    scanf("%d", &pepsi);
    printf("sprite (rs.35): ");
    scanf("%d", &sprite);
    printf("coke (rs.30): ");
    scanf("%d", &coke);
    printf("thumbs up (rs.25): ");
    scanf("%d", &thumbs_up);
    printf("mojitos (rs.25): ");
    scanf("%d", &mojitos);

    printf("----------------------------------\n");

    int boso;
    int hc;
    int hs;
    int bosp;

    boso = 10 * body_soap;
    hc = 25 * hair_cream;
    hs = 50 * hair_spray;
    bosp = 50 * body_spray;
    cosmetics_total = boso + hc + hs + bosp;

    printf("Body Soap: ");
    scanf("%d RS\n", &boso);
    printf("Hair Cream: ");
    scanf("%d RS\n", &hc);
    printf("Hair Spray: ");
    scanf("%d RS\n", &hs);
    printf("Body spray: ");
    scanf("%d RS\n", &bosp);
    printf("Total Cosmetic Price: ");
    scanf("%d RS\n", &cosmetics_total);

    printf("----------------------------------\n");

    int s;
    int t;
    int c;
    int r;
    int w;

    s = 100 * sugar;
    t = 15 * tea;
    c = 50 * coffee;
    r = 150 * rice;
    w = 150 * wheat;
    grocery_total = s + t + r + w + c;

    printf("sugar: ");
    scanf("%d RS\n", &s);
    printf("tea: ");
    scanf("%d RS\n", &t);
    printf("coffee: ");
    scanf("%d RS\n", &c);
    printf("rice: ");
    scanf("%d RS\n", &r);
    printf("wheat: ");
    scanf("%d RS\n", &w);

    printf("----------------------------------\n");

    int pep;
    int spr;
    int cok;
    int moj;
    int thu;

    pep = 30 * pepsi;
    spr = 35 * sprite;
    cok = 30 * coke;
    moj = 25 * mojitos;
    thu = 35 * thumbs_up;
    beverage_total = pep + spr + cok + moj + thu;

    printf("----------------------------------\n");

    total = cosmetics_total + beverage_total + grocery_total;
    printf("Total amount");
    scanf("%d RS\n", &total);

    printf("----------------------------------\n");
    printf("--------------------------------------------------------------------------------------------\n");

    printf("RADHE RADHE SUPERMARKET");

    printf("Customer name: ");
    scanf("%s\n", name);
    printf("customer phone number: ");
    scanf("%d\n", phone_number);
    printf("customer id: ");
    scanf("%d\n", customer_id);

    printf("Product name    Quantity       price\n\n");
    printf("Body soap         %d            %d\n", body_soap, boso);
    printf("Hair cream        %d            %d", hair_cream, hc);
    printf("Body spray        %d            %d", body_spray, bosp);
    printf("Hair spray        %d            %d", hair_spray, hs);
    printf("sugar             %d            %d", sugar, s);
    printf("tea               %d            %d", tea, t);
    printf("coffee            %d            %d", coffee, c);
    printf("rice              %d            %d", rice, r);
    printf("wheat             %d            %d", wheat, w);
    printf("pepsi             %d            %d", pepsi, pep);
    printf("mojitos           %d            %d", mojitos, moj);
    printf("sprite            %d            %d", sprite, spr);
    printf("coke              %d            %d", coke, cok);
    printf("thumbs up         %d            %d", thumbs_up, thu);

    printf("Grocery total price: %d\n\n", grocery_total);

    printf("cosmetic total price: %d\n\n", cosmetics_total);

    printf("Beverage total price: %d\n\n", beverage_total);

    printf("total price: %d\n\n", total);

    printf("--------------------------------------------------------------------------------------------\n");

    return 0;
}