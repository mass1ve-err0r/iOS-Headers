//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MAPropertyAccessReporter : NSObject
{
    NSMutableDictionary *_countByTuple;
    NSMutableDictionary *_countByPropertyKey;
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned long long _accessCount;
    NSString *_dumpPath;
}

@property(retain, nonatomic) NSString *dumpPath; // @synthesize dumpPath=_dumpPath;
@property(nonatomic) unsigned long long accessCount; // @synthesize accessCount=_accessCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSMutableDictionary *countByPropertyKey; // @synthesize countByPropertyKey=_countByPropertyKey;
@property(retain, nonatomic) NSMutableDictionary *countByTuple; // @synthesize countByTuple=_countByTuple;
- (void).cxx_destruct;
- (void)dumpReportToLogForGraph:(id)arg1;
- (void)reportAccessOfPropertyKey:(id)arg1 node:(_Bool)arg2 domain:(unsigned short)arg3 label:(unsigned short)arg4 forGraph:(id)arg5 valueClass:(Class)arg6;
- (id)init;

@end

