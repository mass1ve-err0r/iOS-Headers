//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKServiceRequest.h>

#import <ITMLKit/IKJSViewModelLinkDelegate-Protocol.h>

@class IKAppDocument, IKJSViewModelLink, NSDictionary, NSString;

@interface IKDocumentServiceRequest : IKServiceRequest <IKJSViewModelLinkDelegate>
{
    IKJSViewModelLink *_link;
    struct {
        _Bool hasResponseDictionaryDidChange;
        _Bool hasDocumentDidChange;
    } _dsrDelegateFlags;
    NSDictionary *_respondeDictionary;
    IKAppDocument *_appDocument;
}

@property(readonly) IKAppDocument *appDocument; // @synthesize appDocument=_appDocument;
@property(readonly, copy) NSDictionary *respondeDictionary; // @synthesize respondeDictionary=_respondeDictionary;
- (void).cxx_destruct;
- (void)didCloseViewModelLink:(id)arg1 withErrorDictionary:(id)arg2;
- (void)documentDidChangeForViewModelLink:(id)arg1;
- (void)responseDictionaryDidChangeForViewModelLink:(id)arg1;
- (void)onCancel;
- (void)onSend;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

