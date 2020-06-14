//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface DELogMover : NSObject
{
    NSObject<OS_xpc_object> *_conn;
    NSString *_serviceName;
}

+ (void)moveSystemLogsWithExtensions:(id)arg1;
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void).cxx_destruct;
- (_Bool)sendRequestReturningBooleanResponse:(id)arg1 withSuccessKey:(char *)arg2;
- (id)initWithServiceName:(id)arg1;

@end

