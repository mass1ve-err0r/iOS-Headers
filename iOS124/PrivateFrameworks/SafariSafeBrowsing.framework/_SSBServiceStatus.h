//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _SSBServiceStatus : NSObject
{
    struct ServiceStatus _serviceStatus;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long databaseUpdaterState;
@property(readonly, nonatomic) NSArray *databaseUpdatersStatuses;
- (id)bundleIdentifierForConnectionAtIndex:(unsigned long long)arg1;
- (int)processIdentifierForConnectionAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long connectionCount;
@property(readonly, copy, nonatomic) NSArray *activeTransactions;
@property(readonly) int processIdentifier;
@property(readonly, copy, nonatomic) NSString *name;
- (id)initWithServiceStatus:(struct ServiceStatus)arg1;

@end

