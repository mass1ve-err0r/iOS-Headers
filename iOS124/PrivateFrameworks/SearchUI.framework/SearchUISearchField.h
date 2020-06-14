//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/MFAtomTextView.h>

@class NSString, SearchUIResultViewController;

@interface SearchUISearchField : MFAtomTextView
{
    SearchUIResultViewController *_resultViewController;
}

@property __weak SearchUIResultViewController *resultViewController; // @synthesize resultViewController=_resultViewController;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (id)nextResponder;
- (id)textFromMarkedTextRange:(struct _NSRange)arg1 markedTextReplacement:(id)arg2;
@property(readonly) NSString *searchText;
- (struct _NSRange)_markedTextNSRange;
- (void)setText:(id)arg1;
- (id)text;

@end

