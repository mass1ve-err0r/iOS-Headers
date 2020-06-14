//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface NEFilterBlockPage : NSObject
{
    NSString *_organization;
    NSURL *_pageTemplateURL;
    NSString *_userURL;
    NSString *_formActionURL;
    NSString *_unblockStyle;
    NSString *_remediationButtonText;
}

@property(copy) NSString *remediationButtonText; // @synthesize remediationButtonText=_remediationButtonText;
@property(copy) NSString *unblockStyle; // @synthesize unblockStyle=_unblockStyle;
@property(copy) NSString *formActionURL; // @synthesize formActionURL=_formActionURL;
@property(copy) NSString *userURL; // @synthesize userURL=_userURL;
@property(readonly) NSURL *pageTemplateURL; // @synthesize pageTemplateURL=_pageTemplateURL;
- (void).cxx_destruct;
- (id)page;
@property(copy) NSString *organization;
- (id)_css;
- (id)_blockPage;
- (id)init;

@end

