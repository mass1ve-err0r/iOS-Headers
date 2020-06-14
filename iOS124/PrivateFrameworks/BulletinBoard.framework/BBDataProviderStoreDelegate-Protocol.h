//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinBoard/NSObject-Protocol.h>

@class BBDataProvider, BBParentSectionDataProviderFactory;
@protocol BBDataProviderStore;

@protocol BBDataProviderStoreDelegate <NSObject>
- (void)dataProviderStore:(id <BBDataProviderStore>)arg1 didRemoveDataProvider:(BBDataProvider *)arg2;
- (void)dataProviderStore:(id <BBDataProviderStore>)arg1 didAddDataProvider:(BBDataProvider *)arg2 performMigration:(_Bool)arg3 completion:(void (^)(void))arg4;

@optional
- (void)dataProviderStore:(id <BBDataProviderStore>)arg1 didAddParentSectionFactory:(BBParentSectionDataProviderFactory *)arg2;
@end

