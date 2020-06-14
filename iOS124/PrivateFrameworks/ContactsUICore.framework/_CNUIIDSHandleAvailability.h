//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIIDSHandleAvailability-Protocol.h>

@class NSString;
@protocol CNUIIDSHandle;

@interface _CNUIIDSHandleAvailability : NSObject <CNUIIDSHandleAvailability>
{
    _Bool _available;
    id <CNUIIDSHandle> _handle;
}

@property(readonly, nonatomic) _Bool isAvailable; // @dynamic isAvailable;
@property(readonly, nonatomic) id <CNUIIDSHandle> handle; // @synthesize handle=_handle;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithHandle:(id)arg1 available:(_Bool)arg2;

// Remaining properties
@property(readonly, nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
