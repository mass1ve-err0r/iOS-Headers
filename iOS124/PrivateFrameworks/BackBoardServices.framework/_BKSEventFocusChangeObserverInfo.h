//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSInvalidatable-Protocol.h>

@class NSString;

@interface _BKSEventFocusChangeObserverInfo : NSObject <BSInvalidatable>
{
    _Bool _valid;
    unsigned long long _propertyUpdateGeneration;
}

@property(getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property unsigned long long propertyUpdateGeneration; // @synthesize propertyUpdateGeneration=_propertyUpdateGeneration;
- (void)invalidate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

