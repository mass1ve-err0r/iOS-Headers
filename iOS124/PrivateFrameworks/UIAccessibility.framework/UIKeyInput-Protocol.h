//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIAccessibility/UITextInputTraits-Protocol.h>

@class NSString;

@protocol UIKeyInput <UITextInputTraits>
@property(readonly, nonatomic) _Bool hasText;
- (void)deleteBackward;
- (void)insertText:(NSString *)arg1;
@end

