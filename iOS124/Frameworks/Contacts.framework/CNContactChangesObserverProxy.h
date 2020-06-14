//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, NSArray;
@protocol CNContactChangesObserver;

__attribute__((visibility("hidden")))
@interface CNContactChangesObserverProxy : NSObject
{
    _Bool _unify;
    id <CNContactChangesObserver> _observer;
    NSArray *_keysToFetch;
    CNContact *_contactSnapshot;
}

@property(retain, nonatomic) CNContact *contactSnapshot; // @synthesize contactSnapshot=_contactSnapshot;
@property(nonatomic) _Bool unify; // @synthesize unify=_unify;
@property(retain, nonatomic) NSArray *keysToFetch; // @synthesize keysToFetch=_keysToFetch;
@property(nonatomic) __weak id <CNContactChangesObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;

@end

