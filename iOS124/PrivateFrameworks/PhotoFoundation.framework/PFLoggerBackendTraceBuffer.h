//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoFoundation/PFLoggerBackendAdapter.h>

@class NSDictionary;

@interface PFLoggerBackendTraceBuffer : PFLoggerBackendAdapter
{
    NSDictionary *_traceBuffers;
}

+ (id)backendsFromUserDefaultsWithLogLevel:(int)arg1;
@property(retain) NSDictionary *traceBuffers; // @synthesize traceBuffers=_traceBuffers;
- (void).cxx_destruct;
- (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(struct __va_list_tag [1])arg7;
- (_Bool)allowsConcurrentAccess;
- (id)init;

@end

