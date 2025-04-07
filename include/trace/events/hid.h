// Create the missing trace header: include/trace/events/hid.h

#ifndef _TRACE_EVENTS_HID_H
#define _TRACE_EVENTS_HID_H

#include <linux/tracepoint.h>

TRACE_EVENT(hid_event,
    TP_PROTO(int id, const char *action),
    TP_ARGS(id, action),
    TP_STRUCT__entry(
        __field(int, id)
        __string(action, action)
    ),
    TP_fast_assign(
        __entry->id = id;
        __assign_str(action, action);
    ),
    TP_printk("id=%d action=%s", __entry->id, __entry->action)
);

#endif /* _TRACE_EVENTS_HID_H */
