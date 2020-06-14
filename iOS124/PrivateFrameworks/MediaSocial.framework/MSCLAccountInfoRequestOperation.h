//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSVComplexOperation.h>

@class NSObject, NSString, SKUIMediaSocialAuthor;
@protocol OS_dispatch_queue;

@interface MSCLAccountInfoRequestOperation : SSVComplexOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_serviceIdentifier;
    SKUIMediaSocialAuthor *_author;
    CDUnknownBlockType _outputBlock;
}

@property(copy, nonatomic) CDUnknownBlockType outputBlock; // @synthesize outputBlock=_outputBlock;
@property(readonly, copy, nonatomic) SKUIMediaSocialAuthor *author; // @synthesize author=_author;
@property(readonly, copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void).cxx_destruct;
- (id)_facebookPagesFromResponseDictionary:(id)arg1;
- (void)main;
- (id)initWithServiceIdentifier:(id)arg1 forAuthor:(id)arg2;

@end

