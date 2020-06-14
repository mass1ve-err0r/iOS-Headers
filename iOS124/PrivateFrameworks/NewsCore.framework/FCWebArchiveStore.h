//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCAssetStore;

@interface FCWebArchiveStore : NSObject
{
    FCAssetStore *_assetStore;
}

@property(retain, nonatomic) FCAssetStore *assetStore; // @synthesize assetStore=_assetStore;
- (void).cxx_destruct;
- (id)allWebArchiveKeys;
- (unsigned long long)totalSizeOfAllWebArchives;
- (_Bool)deleteWebArchiveForKey:(id)arg1;
- (_Bool)saveWebArchiveData:(id)arg1 forKey:(id)arg2;
- (id)webArchiveURLForKey:(id)arg1;
- (id)initWithStoreDirectory:(id)arg1;

@end

