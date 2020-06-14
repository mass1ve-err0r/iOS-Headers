/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGPotentialHobbyMemory : PGPotentialMemory {
    NSArray * _hobbyAssets;
    long long  _hobbyType;
    NSMutableSet * _mutableMomentNodes;
    PGGraphNode * _person;
    long long  _year;
}

@property (retain) NSArray *hobbyAssets;
@property (readonly) long long hobbyType;
@property (readonly) PGGraphNode *person;
@property (readonly) long long year;

- (void).cxx_destruct;
- (void)addMomentNode:(id)arg1;
- (id)hobbyAssets;
- (long long)hobbyType;
- (id)initWithPerson:(id)arg1 year:(long long)arg2 hobbyType:(long long)arg3;
- (id)person;
- (void)setHobbyAssets:(id)arg1;
- (long long)year;

@end