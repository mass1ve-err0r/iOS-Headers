//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLSearchMetadataStore : NSObject
{
    NSString *_storePath;
}

- (void).cxx_destruct;
- (void)updateSearchMetadataTo:(id)arg1;
- (id)currentSearchMetadata;
- (void)deleteStore;
- (id)initWithPath:(id)arg1;

@end

