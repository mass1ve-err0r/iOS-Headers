//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ESDContainer, ESDObject;

__attribute__((visibility("hidden")))
@interface PptHyperlinkBlock : NSObject
{
    ESDContainer *mInteractiveInfoContainerHolder;
    ESDObject *mTxInteractiveInfoAtomHolder;
}

- (void)setTxInteractiveInfoAtomHolder:(id)arg1;
- (struct PptTxInteracInfoAtom *)txtInteractiveInfoAtom;
- (void)setInteractiveInfoContainerHolder:(id)arg1;
- (id)interactiveInfoContainerHolder;

@end

