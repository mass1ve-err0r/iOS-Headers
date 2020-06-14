/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphAddressNode : PGGraphLocationNode <PGGraphPortraitLocationNamedEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PPLocationNamedEntities *pg_locationNamedEntity;
@property (readonly) Class superclass;

- (id)UUID;
- (void)addressEnumerateMomentNodesUsingBlock:(id /* block */)arg1;
- (id)areaNodes;
- (id)cityNode;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)countryNode;
- (id)districtNode;
- (void)enumerateAreaNodesUsingBlock:(id /* block */)arg1;
- (void)enumeratePersonHomeOrWorkNodesUsingBlock:(id /* block */)arg1;
- (bool)isOcean;
- (bool)isPersonHomeOrWorkAddress;
- (id)location;
- (bool)locationIsImproved;
- (id)momentNodes;
- (id)pg_locationNamedEntity;
- (id)stateNode;
- (id)streetNode;

@end