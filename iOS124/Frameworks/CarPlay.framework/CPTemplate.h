//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlay/CPBarButtonDelegate-Protocol.h>
#import <CarPlay/CPBarButtonProviding-Protocol.h>
#import <CarPlay/CPControlDelegate-Protocol.h>
#import <CarPlay/CPTemplateDelegate-Protocol.h>
#import <CarPlay/NSSecureCoding-Protocol.h>

@class CPBarButton, NSArray, NSOperationQueue, NSString, NSUUID;
@protocol CPBaseTemplateProviding, CPTemplateDelegate;

@interface CPTemplate : NSObject <CPBarButtonDelegate, CPBarButtonProviding, CPControlDelegate, CPTemplateDelegate, NSSecureCoding>
{
    CPBarButton *_backButton;
    id _userInfo;
    id <CPBaseTemplateProviding> _templateProvider;
    NSUUID *_identifier;
    id <CPTemplateDelegate> _templateDelegate;
    NSArray *_internalLeadingBarButtons;
    NSArray *_internalTrailingBarButtons;
    NSOperationQueue *_deferredOperationQueue;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSOperationQueue *deferredOperationQueue; // @synthesize deferredOperationQueue=_deferredOperationQueue;
@property(retain, nonatomic) NSArray *internalTrailingBarButtons; // @synthesize internalTrailingBarButtons=_internalTrailingBarButtons;
@property(retain, nonatomic) NSArray *internalLeadingBarButtons; // @synthesize internalLeadingBarButtons=_internalLeadingBarButtons;
@property(nonatomic) __weak id <CPTemplateDelegate> templateDelegate; // @synthesize templateDelegate=_templateDelegate;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) id <CPBaseTemplateProviding> templateProvider; // @synthesize templateProvider=_templateProvider;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) CPBarButton *backButton; // @synthesize backButton=_backButton;
- (void).cxx_destruct;
- (_Bool)barButton:(id)arg1 setTitle:(id)arg2;
- (_Bool)barButton:(id)arg1 setImage:(id)arg2;
- (_Bool)control:(id)arg1 setEnabled:(_Bool)arg2;
- (void)templateDidDisappear:(id)arg1 animated:(_Bool)arg2;
- (void)templateDidAppear:(id)arg1 animated:(_Bool)arg2;
- (void)templateWillDisappear:(id)arg1 animated:(_Bool)arg2;
- (void)templateWillAppear:(id)arg1 animated:(_Bool)arg2;
- (void)handleActionForControlIdentifier:(id)arg1;
@property(retain, nonatomic) NSArray *trailingNavigationBarButtons;
@property(retain, nonatomic) NSArray *leadingNavigationBarButtons;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

