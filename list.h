
#ifndef LIST_H
#define LIST_H


void Gifting(vector<pair<Boy, Girl> > vtp, Reader rf);
bool is_Compatible(Boy b, Girl g);
vector<pair<Boy, Girl> > Make_Couple(Reader rf);
void Sort_couples_Happiness(vector<pair<Boy, Girl> > vtp, int k);
void Sort_couples_Compatibility(vector<pair<Boy, Girl> > vtp, int k);
void Compute_Compatibility(vector<pair<Boy, Girl> > vtp);
void ptm();
#endif /* !LIST_H */
