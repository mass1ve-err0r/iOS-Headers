//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/NSObject-Protocol.h>

@class IKChangeSet, IKViewElement, IKViewElementFactory, NSArray, NSDictionary;
@protocol IKDataSourceElementImplementing;

@protocol IKDataSourceElementImplementing <NSObject>
@property(readonly, copy, nonatomic) NSDictionary *indexTitles;
@property(readonly, nonatomic) IKChangeSet *itemsChangeSet;
@property(readonly, copy, nonatomic) NSArray *proxiedItemElements;
@property(readonly, nonatomic) NSArray *prototypes;
- (void)resetUpdates;
- (void)updateStylesUsingUpdater:(void (^)(void))arg1;
- (void)applyUpdatesWithImplementation:(id <IKDataSourceElementImplementing>)arg1 usingUpdater:(IKDataSourceElement * (^)(void))arg2;
- (void)configureUpdatesWithImplementation:(id <IKDataSourceElementImplementing>)arg1;
- (void)teardown;
- (void)initializeWithElementFactory:(IKViewElementFactory *)arg1;
- (void)unloadIndex:(long long)arg1;
- (void)loadIndex:(long long)arg1;
- (long long)indexOfItemForElement:(IKViewElement *)arg1;
- (IKViewElement *)elementForItemAtIndex:(long long)arg1;
- (IKViewElement *)prototypeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;

@optional
- (_Bool)canProxyUnloadedChildElement:(IKViewElement *)arg1;
- (IKViewElement *)proxyElementForLoadedChildElement:(IKViewElement *)arg1;
- (void)resetImplicitUpdates;
@end

