// TODO Unknown
#define DWG_TYPE DWG_TYPE_VISIBILITYPARAMETERENTITY
#include "common.c"

void
api_process (dwg_object *obj)
{
  int error, isnew;

  Dwg_Version_Type dwg_version = obj->parent->header.version;
#ifdef DEBUG_CLASSES
  dwg_ent_visibilityparameterentity *_obj
      = dwg_object_to_VISIBILITYPARAMETERENTITY (obj);

#endif
}
