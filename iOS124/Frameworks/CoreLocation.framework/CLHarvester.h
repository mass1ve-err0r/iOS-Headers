//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface CLHarvester : NSObject
{
    NSXPCConnection *_connection;
}

- (id)currentStateDictionary;
- (void)submitSample:(id)arg1;
- (void)connect;
- (void)dealloc;

@end

