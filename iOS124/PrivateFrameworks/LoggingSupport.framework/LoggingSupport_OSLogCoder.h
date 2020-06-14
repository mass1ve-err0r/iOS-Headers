//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LoggingSupport/OSLogCoder-Protocol.h>

__attribute__((visibility("hidden")))
@interface LoggingSupport_OSLogCoder : NSObject <OSLogCoder>
{
    struct {
        unsigned int :4;
        unsigned int :4;
        unsigned char _field1;
        unsigned char _field2[0];
    } *_fmt_cmd;
    struct os_trace_blob_s *_ob;
    struct os_trace_blob_s *_ob_pub;
    struct os_trace_blob_s *_ob_priv;
    unsigned long long _maxsz;
    unsigned short _written;
    unsigned short _offset;
    _Bool _truncated;
}

- (void)appendBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)setTruncated;
- (void)setPublic;
- (void)_setFlags:(unsigned char)arg1;

@end

