#pragma once

#include <QQmlExtensionPlugin>

class DoItYourselfBarPlugin : public QQmlExtensionPlugin {
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")

public:
    virtual void registerTypes(const char* uri) override;
};
