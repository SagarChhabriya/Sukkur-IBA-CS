import xml.etree.ElementTree as ET

# Parse the XML file
path = 'A:\\py -code\\Databases\\mongo\\presentation\\2_data.xml'
tree = ET.parse(path)
root = tree.getroot()

print(f"Root element: {root.tag}")
# Access elements and data
for child in root:
    print("\nTag:", child.tag)
    print("Text:", child.text)

    # If there are nested elements, access and print them
    for nested_child in child:
        print("Nested Tag:", nested_child.tag,end=", ")
        print("Text:", nested_child.text,end="; \n")
