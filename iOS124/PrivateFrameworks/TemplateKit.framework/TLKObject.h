//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TemplateKit/TLKObservable-Protocol.h>
#import <TemplateKit/TLKObserver-Protocol.h>

@class NSString;
@protocol TLKObserver;

@interface TLKObject : NSObject <TLKObservable, TLKObserver>
{
    _Bool inBatchUpdate;
    id <TLKObserver> observer;
}

@property _Bool inBatchUpdate; // @synthesize inBatchUpdate;
@property __weak id <TLKObserver> observer; // @synthesize observer;
- (void).cxx_destruct;
- (void)propertiesDidChange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

