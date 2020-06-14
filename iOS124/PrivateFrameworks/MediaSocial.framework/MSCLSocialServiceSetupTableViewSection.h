//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSCLAccountStore, MSCLSocialService, NSArray, NSOperationQueue, SKUIClientContext, UIImage;

@interface MSCLSocialServiceSetupTableViewSection : NSObject
{
    MSCLAccountStore *_accountStore;
    SKUIClientContext *_clientContext;
    NSArray *_facebookPages;
    UIImage *_image;
    MSCLSocialService *_service;
    NSOperationQueue *_operationQueue;
}

+ (id)instanceWithService:(id)arg1 accountStore:(id)arg2;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) MSCLSocialService *service; // @synthesize service=_service;
@property(readonly, nonatomic) MSCLAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(copy, nonatomic) NSArray *facebookPages; // @synthesize facebookPages=_facebookPages;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (id)_serviceTitle;
- (id)_displayNameForAccount:(id)arg1;
- (long long)_cellTypeForIndexPath:(id)arg1;
- (void)_switchAction:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)registerReusableCellsWithTableView:(id)arg1;
- (id)performActionForIndexPath:(id)arg1 parentViewController:(id)arg2;
- (id)initWithService:(id)arg1 accountStore:(id)arg2;

@end

