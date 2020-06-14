//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSEditingPane.h>

@class NSThread, UITextView;

@interface CPUActivityPane : PSEditingPane
{
    NSThread *_worker;
    UITextView *_textView;
    char _buf1[4096];
    char _buf2[4096];
    char *_readBuffer;
    char *_writeBuffer;
}

- (void).cxx_destruct;
- (void)_worker;
- (void)_switchBuffers:(id)arg1;
- (void)setPreferenceSpecifier:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)_killWorker;
- (void)_startWorker;
- (void)_cleanupTextView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

