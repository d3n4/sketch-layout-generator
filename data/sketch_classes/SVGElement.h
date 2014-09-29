@interface SVGElement : _SVGElement
{
NSXMLElement *_xml;	// 8 = 0x8
SVGImporter *_importer;	// 16 = 0x10
}
+ (id)elementOfType:(id)arg1 xml:(id)arg2 importer:(id)arg3 parent:(id)arg4;
@property(retain, nonatomic) SVGImporter *importer; // @synthesize importer=_importer;
@property(retain, nonatomic) NSXMLElement *xml; // @synthesize xml=_xml;
- (void).cxx_destruct;
- (id)styleAttributesForElement:(id)arg1 defaults:(id)arg2;
- (id)relativeURLForLink:(id)arg1;
- (void)resolvedValue:(id)arg1 forProperty:(id)arg2;
- (id)drawableParent;
- (BOOL)containsDrawables;
- (id)name;
- (void)addReferenceToIdentifier:(id)arg1 type:(id)arg2 property:(id)arg3;
- (id)svgAttributesDescription;
- (id)svgDescription;
- (id)elementOfType:(id)arg1 xml:(id)arg2 parent:(id)arg3;
- (void)processStyles:(id)arg1;
- (void)processStyles;
- (void)process;
- (void)processChildren:(id)arg1 startingAtIndex:(unsigned long long)arg2;
- (void)processChildren:(id)arg1;
- (unsigned long long)processChild:(id)arg1 index:(unsigned long long)arg2;
- (void)processIdentifier:(id)arg1;
- (void)processSelf:(id)arg1;
- (id)initWithImporter:(id)arg1 xml:(id)arg2;
- (id)makeLayerWithParentLayer:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (id)adjustOwnLayer:(id)arg1 parentLayer:(id)arg2;
- (void)nameLayer:(id)arg1;
- (id)effectiveLayerName;
- (void)adjustSizeForChildrenOfLayer:(id)arg1 parentLayer:(id)arg2;
- (void)makeChildLayersWithParentLayer:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (id)makeOwnLayerWithParentLayer:(id)arg1;
@end
