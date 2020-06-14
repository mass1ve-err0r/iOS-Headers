//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKServiceRequest.h>

#import <ITMLKit/IKJSViewModelLinkDelegate-Protocol.h>

@class IKJSViewModelLink, NSString;

@interface IKUpdateServiceRequest : IKServiceRequest <IKJSViewModelLinkDelegate>
{
    IKJSViewModelLink *_link;
}

- (void).cxx_destruct;
- (void)didCloseViewModelLink:(id)arg1 withErrorDictionary:(id)arg2;
- (void)documentDidChangeForViewModelLink:(id)arg1;
- (void)onCancel;
- (void)onSend;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

