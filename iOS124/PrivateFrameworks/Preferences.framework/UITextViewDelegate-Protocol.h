//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/NSObject-Protocol.h>
#import <Preferences/UIScrollViewDelegate-Protocol.h>

@class NSString, NSTextAttachment, NSURL, UITextView;

@protocol UITextViewDelegate <NSObject, UIScrollViewDelegate>

@optional
- (_Bool)textView:(UITextView *)arg1 shouldInteractWithTextAttachment:(NSTextAttachment *)arg2 inRange:(struct _NSRange)arg3;
- (_Bool)textView:(UITextView *)arg1 shouldInteractWithURL:(NSURL *)arg2 inRange:(struct _NSRange)arg3;
- (_Bool)textView:(UITextView *)arg1 shouldInteractWithTextAttachment:(NSTextAttachment *)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (_Bool)textView:(UITextView *)arg1 shouldInteractWithURL:(NSURL *)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)textViewDidChangeSelection:(UITextView *)arg1;
- (void)textViewDidChange:(UITextView *)arg1;
- (_Bool)textView:(UITextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)textViewDidEndEditing:(UITextView *)arg1;
- (void)textViewDidBeginEditing:(UITextView *)arg1;
- (_Bool)textViewShouldEndEditing:(UITextView *)arg1;
- (_Bool)textViewShouldBeginEditing:(UITextView *)arg1;
@end

