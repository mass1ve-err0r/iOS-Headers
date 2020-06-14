//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class IKAppMenuBarDocument, IKViewElement;
@protocol NSCopying;

@protocol IKAppMenuBarDocumentDelegate <NSObject>

@optional
- (void)menuBarDocument:(IKAppMenuBarDocument *)arg1 didSelectMenuItem:(IKViewElement *)arg2 animated:(_Bool)arg3;
- (void)menuBarDocument:(IKAppMenuBarDocument *)arg1 didReplaceDocumentForEntityWithUniqueIdentifier:(id <NSCopying>)arg2;
- (void)menuBarDocument:(IKAppMenuBarDocument *)arg1 didReplaceDocumentForMenuItem:(IKViewElement *)arg2;
@end

