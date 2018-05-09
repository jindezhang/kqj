#ifndef CHANGE_ASC_H
#define CHANGE_ASC_H

#include <allstruct.h>

class Change_asc
{
public:
    Change_asc();
    ~Change_asc();
    void rule_change(Rule &data);
    void em_infos_change(Em_infos &data);
    void change_rule_(Rule &data);
    void change_em_infos_(Em_infos &data);


};

#endif // CHANGE_ASC_H
