//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURLRequest, TMLContext, TMLJSONObject, UIViewController;
@protocol TKNetworkTask;

@interface TKPage : NSObject
{
    TMLJSONObject *_dataObject;
    TMLContext *_context;
    UIViewController *_weakViewController;
    UIViewController *_loadingViewController;
    id <TKNetworkTask> _networkTask;
    _Bool _ready;
    _Bool _dataLoading;
    _Bool _shouldShowLoading;
    NSString *_viewName;
    NSURLRequest *_dataRequest;
}

@property(nonatomic) _Bool shouldShowLoading; // @synthesize shouldShowLoading=_shouldShowLoading;
@property(readonly, nonatomic) _Bool dataLoading; // @synthesize dataLoading=_dataLoading;
@property(copy, nonatomic) NSURLRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(readonly, nonatomic) NSString *viewName; // @synthesize viewName=_viewName;
- (void).cxx_destruct;
- (void)hideLoadingViewController;
- (void)showLoadingViewController;
- (void)didLoadData:(_Bool)arg1;
- (void)dataError;
- (void)dataLoaded:(id)arg1 withError:(id)arg2;
- (void)didFinishLoading:(id)arg1 data:(id)arg2 responseError:(id)arg3;
- (void)reloadWithDelayedShowLoading:(_Bool)arg1;
- (void)loadRequest:(id)arg1;
- (void)loadData:(id)arg1 postData:(id)arg2;
- (void)reload;
- (void)load;
@property(copy, nonatomic) NSDictionary *data;
- (void)dispose;
- (id)createViewController;
@property(readonly, nonatomic) UIViewController *viewController;
- (void)dealloc;
- (id)initWithViewName:(id)arg1;

@end

