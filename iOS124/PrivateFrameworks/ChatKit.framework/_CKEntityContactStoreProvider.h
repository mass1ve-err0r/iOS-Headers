//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKEntityContactStoreProvider-Protocol.h>

@class NSString;

@interface _CKEntityContactStoreProvider : NSObject <CKEntityContactStoreProvider>
{
}

+ (id)sharedInstance;
- (void *)addressBook;
- (id)contactStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

