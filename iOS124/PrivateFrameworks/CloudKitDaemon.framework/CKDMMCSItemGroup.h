//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKAssetDownloadPreauthorization, NSArray, NSData, NSError, NSMutableArray, NSString, NSURL;
@protocol MMCSOperationMetric;

__attribute__((visibility("hidden")))
@interface CKDMMCSItemGroup : NSObject
{
    NSMutableArray *_items;
    _Bool _complete;
    NSError *_error;
    id <MMCSOperationMetric> _metrics;
    NSData *_authPutRequest;
    NSArray *_tuple;
}

+ (id)tupleForItem:(id)arg1;
@property(nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(retain, nonatomic) NSArray *tuple; // @synthesize tuple=_tuple;
@property(retain, nonatomic) NSData *authPutRequest; // @synthesize authPutRequest=_authPutRequest;
@property(retain, nonatomic) id <MMCSOperationMetric> metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)addItem:(id)arg1;
@property(readonly, nonatomic) CKAssetDownloadPreauthorization *downloadPreauthorization;
@property(readonly, nonatomic) NSString *requestor;
@property(readonly, nonatomic) NSString *owner;
@property(readonly, nonatomic) NSURL *contentBaseURL;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithTuple:(id)arg1;

@end

