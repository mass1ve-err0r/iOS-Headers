//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKeyInput-Protocol.h>

@class NSString, NSUUID, UITextInputMode;

@protocol UITextDocumentProxy <UIKeyInput>
@property(readonly, copy, nonatomic) NSUUID *documentIdentifier;
@property(readonly, nonatomic) UITextInputMode *documentInputMode;
@property(readonly, nonatomic) NSString *selectedText;
@property(readonly, nonatomic) NSString *documentContextAfterInput;
@property(readonly, nonatomic) NSString *documentContextBeforeInput;
- (void)adjustTextPositionByCharacterOffset:(long long)arg1;
@end

