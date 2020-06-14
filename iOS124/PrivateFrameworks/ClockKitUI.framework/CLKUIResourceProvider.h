//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSNumber, NSSet;
@protocol CLKUIResourceProviderDelegate;

@interface CLKUIResourceProvider : NSObject
{
    NSMutableSet *_uuidHistory;
    id <CLKUIResourceProviderDelegate> _delegate;
    NSNumber *_key;
}

@property(readonly, nonatomic) NSNumber *key; // @synthesize key=_key;
@property(readonly, nonatomic) NSSet *uuidHistory; // @synthesize uuidHistory=_uuidHistory;
@property(readonly, nonatomic) __weak id <CLKUIResourceProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addUuidToHistory:(id)arg1;
- (id)initWithDelegate:(id)arg1 key:(id)arg2;

@end

