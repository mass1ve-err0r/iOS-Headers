//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class ISDialog, SSVDialogResponse;

@interface DaemonDialogOperation : ISOperation
{
    ISDialog *_dialog;
    SSVDialogResponse *_dialogResponse;
    _Bool _displaysOnLockscreen;
    CDUnknownBlockType _outputBlock;
}

- (void)run;
@property(copy) CDUnknownBlockType outputBlock;
@property _Bool displaysOnLockscreen;
@property(readonly, copy) SSVDialogResponse *dialogResponse;
@property(readonly) ISDialog *dialog;
- (void)dealloc;
- (id)initWithDialog:(id)arg1;

@end

