// TODO DEBUGGING
#define DWG_TYPE DWG_TYPE_ROTATIONPARAMETERENTITY
#include "common.c"

void
api_process (dwg_object *obj)
{
  int error, isnew;

  Dwg_Version_Type dwg_version = obj->parent->header.version;
#ifdef DEBUG_CLASSES
  dwg_ent_rotationparameterentity *_obj
      = dwg_object_to_ROTATIONPARAMETERENTITY (obj);

#endif
}
