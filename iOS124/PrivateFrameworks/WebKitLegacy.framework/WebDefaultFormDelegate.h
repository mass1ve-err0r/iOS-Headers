//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebFormDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebDefaultFormDelegate : NSObject <WebFormDelegate>
{
}

+ (id)sharedFormDelegate;
- (void)willSendSubmitEventToForm:(id)arg1 inFrame:(id)arg2 withValues:(id)arg3;
- (void)frame:(id)arg1 sourceFrame:(id)arg2 willSubmitForm:(id)arg3 withValues:(id)arg4 submissionListener:(id)arg5;
- (_Bool)textField:(id)arg1 doCommandBySelector:(SEL)arg2 inFrame:(id)arg3;
- (void)didFocusTextField:(id)arg1 inFrame:(id)arg2;
- (void)textDidChangeInTextArea:(id)arg1 inFrame:(id)arg2;
- (void)textDidChangeInTextField:(id)arg1 inFrame:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1 inFrame:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1 inFrame:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

