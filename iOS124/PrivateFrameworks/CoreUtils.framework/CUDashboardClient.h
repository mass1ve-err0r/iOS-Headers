//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CUDashboardClient : NSObject
{
    CDUnion_fab80606 _destAddr;
    unsigned int _destLen;
    unsigned char _key[32];
    char _model[32];
    char _osBuild[32];
    int _sock;
    unsigned char _udid[20];
    NSString *_server;
}

@property(copy, nonatomic) NSString *server; // @synthesize server=_server;
- (void).cxx_destruct;
- (int)_setupSocket;
- (int)_logCStr:(const char *)arg1 length:(unsigned long long)arg2;
- (int)logv:(const char *)arg1 args:(struct __va_list_tag [1])arg2;
- (int)logf:(const char *)arg1;
- (int)logJSON:(id)arg1;
- (void)invalidate;
- (int)_activate;
- (int)activate;
- (void)dealloc;
- (id)init;

@end

