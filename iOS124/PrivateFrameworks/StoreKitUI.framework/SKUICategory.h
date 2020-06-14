//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;
@protocol SKUIArtworkProviding;

@interface SKUICategory : NSObject
{
    long long _categoryIdentifier;
    NSArray *_children;
    NSString *_name;
    NSString *_parentLabel;
    NSURL *_url;
    id <SKUIArtworkProviding> _artworkProvider;
}

@property(readonly, nonatomic) id <SKUIArtworkProviding> artworkProvider; // @synthesize artworkProvider=_artworkProvider;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(readonly, nonatomic) NSString *parentLabel; // @synthesize parentLabel=_parentLabel;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *children; // @synthesize children=_children;
@property(readonly, nonatomic) long long categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
- (void).cxx_destruct;
- (id)subcategoryContainingURL:(id)arg1;
- (_Bool)containsURL:(id)arg1;
- (id)initWithCategoryDictionary:(id)arg1;

@end

